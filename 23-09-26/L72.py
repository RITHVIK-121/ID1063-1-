def days_elapsed(day: int, month: int) -> int:
    # Days in each month for a non-leap year (index 0 is a placeholder)
    days_in_months = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    
    # Sum the days of all full months prior to the given month, plus current days
    return sum(days_in_months[:month]) + day

def main():
    try:
        # Read a single line of input and split it into day and month
        user_input = input().split()
        if len(user_input) >= 2:
            day = int(user_input[0])
            month = int(user_input[1])
            
            result = days_elapsed(day, month)
            print(result)
    except (ValueError, IndexError):
        pass

if __name__ == "__main__":
    main()

