# DSA Learning Tracker 🚀

A Python automation tool to organize and track your Data Structures & Algorithms learning journey.

## Features

- **Structured Learning Path**: Covers 8 essential DSA topics (Arrays → Dynamic Programming)
- **Progress Tracking**: Automatically tracks how many days you've spent on each topic
- **Smart Reminders**: Suggests when to move to the next topic (based on recommended days)
- **Problem Templates**: Pre-built Python templates for common interview problems
- **Organized Folders**: Creates a clean folder structure for your solutions

## Topics Covered

| Topic | Recommended Days | Problems |
|-------|-----------------|----------|
| Arrays | 45 | Two Sum, Max Subarray, Rotate Array, Merge Sorted |
| Strings | 30 | Reverse String, Valid Anagram, Longest Substring, Palindrome |
| Linked Lists | 35 | Reverse List, Merge Lists, Detect Cycle, Remove Nth |
| Stacks & Queues | 25 | Valid Parentheses, Min Stack, Queue Using Stacks, Daily Temperatures |
| Trees | 45 | Max Depth, Invert Tree, Level Order, Validate BST |
| Graphs | 40 | Number of Islands, Clone Graph, Course Schedule, Shortest Path |
| Dynamic Programming | 50 | Climbing Stairs, Coin Change, LCS, Knapsack |
| Sorting & Searching | 30 | Binary Search, Merge Sort, Quick Sort, Search Rotated |

## Installation

```bash
git clone https://github.com/manavmisra2/dsa-tracker.git
cd dsa-tracker
```

## Usage

```bash
# Set up all folders at once
python dsa_tracker.py --setup

# Start your learning journey (begins with Arrays)
python dsa_tracker.py --start

# Check your current progress
python dsa_tracker.py --status

# Move to the next topic when ready
python dsa_tracker.py --next
```

## Folder Structure

```
dsa-tracker/
├── dsa_tracker.py      # Main automation script
├── progress.json       # Your progress data
├── README.md
└── DSA/
    ├── Arrays/
    │   ├── README.md
    │   └── problems/
    │       ├── two_sum.py
    │       ├── max_subarray.py
    │       └── ...
    ├── Strings/
    ├── LinkedLists/
    └── ...
```

## How It Works

1. **Start**: Run `--start` to begin with Arrays
2. **Practice**: Solve problems in `DSA/{topic}/problems/`
3. **Track**: Use `--status` to see your progress
4. **Advance**: Run `--next` when you're ready to move on

The tracker remembers your progress and suggests when you've spent enough time on each topic.

## Contributing

Feel free to add more problems or topics by modifying the `DSA_TOPICS` list in `dsa_tracker.py`.

## License

MIT
