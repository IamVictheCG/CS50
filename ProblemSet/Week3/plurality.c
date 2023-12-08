#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
} candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);
void print_candidate_votes(string name);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    printf("candidate_count: %i\n\n", candidate_count);

    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        printf("candidate %i: %s\n", i + 1, candidates[i].name);
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }
    // Display single candidate
    string ViewVotes = get_string("Enter Candidate name: ");

    print_candidate_votes(ViewVotes);
    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(name, candidates[i].name) == 0)
        {
            candidates[i].votes++;
            return true;
        }
    }
    return false;
}

// print out the votes of a single candidate of your choosing
void print_candidate_votes(string name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(name, candidates[i].name) == 0)
        {
            printf("Votes for %s: %d\n", candidates[i].name, candidates[i].votes);
            return;
        }
        else
        {
            return;
        }
    }
    printf("Candidate not found.\n");
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    int max_vote = 0;
    int winning_candidates[MAX]; // Array to store indices of winning candidates
    // Find the maximum number of votes
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > max_vote)
        {
            max_vote = candidates[i].votes;
        }
    }

    // Print the candidate(s) with the most votes
    int n_max = 0; // n_max = number of winners
    for (int i = 0; i < candidate_count; i++)
    {
        // n_max = number of winners
        if (candidates[i].votes == max_vote)
        {
            winning_candidates[n_max] = i;
            n_max++;
        }
    }

    if (n_max == 1)
    {
        printf("The Winner of the election is %s \n", candidates[winning_candidates[n_max]].name);
    }

    if (n_max >= 2)
    {
        printf("The Winners of the election are; ");
        for (int i = 0; i < n_max; i++)
        {
            printf("%s", candidates[winning_candidates[i]].name);
            if (i < n_max - 1)
            {
                printf(", "); // Add a comma between multiple winners
            }
        }
        printf(".");
        printf("\n");
    }
    return;
}
