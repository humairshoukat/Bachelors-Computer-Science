namespace Tic_Tac_Toe
{
    public partial class Form1 : Form
    {
        bool playerTurn = true;
        int turnCount = 0;

        public Form1()
        {
            InitializeComponent();
        }

        private void newGameToolStripMenuItem_Click(object sender, EventArgs e)
        {
            autoNewGame();
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void aboutToolStripMenuItem1_Click(object sender, EventArgs e)
        {
            
        }

        private void buttonClick(object sender, EventArgs e)
        {
            Button theButtton = (Button)sender;

            if (playerTurn)
            {
                turn.Text = "O's turn";
                theButtton.Text = "X";
                theButtton.Enabled = false;
            }
            else
            {
                turn.Text = "X's turn";
                theButtton.Text = "O";
                theButtton.Enabled = false;
            }
            turnCount++;
            playerTurn = !playerTurn;
            checkWinner();
        }

        private void checkWinner()
        {
            bool weHaveWinner = false;

            if ((A1.Text == A2.Text) && (A2.Text == A3.Text) && (!A2.Enabled))
                weHaveWinner = true;
            else if ((B1.Text == B2.Text) && (B2.Text == B3.Text) && (!B2.Enabled))
                weHaveWinner = true;
            else if ((C1.Text == C2.Text) && (C2.Text == C3.Text) && (!C2.Enabled))
                weHaveWinner = true;
            else if ((A1.Text == B1.Text) && (B1.Text == C1.Text) && (!B1.Enabled))
                weHaveWinner = true;
            else if ((A2.Text == B2.Text) && (B2.Text == C2.Text) && (!B2.Enabled))
                weHaveWinner = true;
            else if ((A3.Text == B3.Text) && (B3.Text == C3.Text) && (!B3.Enabled))
                weHaveWinner = true;
            else if ((A1.Text == B2.Text) && (B2.Text == C3.Text) && (!B2.Enabled))
                weHaveWinner = true;
            else if ((A3.Text == B2.Text) && (B2.Text == C1.Text) && (!B2.Enabled))
                weHaveWinner = true;

            if (weHaveWinner)
            {
                String winner = "";

                if (playerTurn)
                    winner = "0";
                else
                    winner = "X";

                MessageBox.Show(winner + " won!", "Game over!");
                autoNewGame();
            }
            else
            {
                if (turnCount == 9)
                {
                    MessageBox.Show("Draw...", "Game over!");
                    autoNewGame();
                }
            }
        }

        private void autoNewGame()
        {
            playerTurn = true;
            turnCount = 0;
            turn.Text = "It's X's turn";

            foreach (Control c in Controls)
            {
                if (c is Button)
                {
                    (c as Button).Enabled = true;
                    (c as Button).Text = "";
                }
            }
        }
    }
}