import datetime

def get_mood_for_day(day):
    # Typical 28-day cycle mood mapping (this is generalized)
    if 1 <= day <= 5:
        return "😖 Menstruation (Low energy, cramps)"
    elif 6 <= day <= 13:
        return "😊 Follicular (Energetic, good mood)"
    elif day == 14:
        return "💥 Ovulation (Peak energy, best mood)"
    elif 15 <= day <= 21:
        return "🙂 Luteal (Stable mood)"
    elif 22 <= day <= 28:
        return "😡 PMS (Irritable, mood swings)"
    else:
        return "❓ Unknown"

def draw_mood_chart(start_date):
    print("\n🗓️ Mood Chart from", start_date.strftime("%Y-%m-%d"))
    print("-" * 50)
    
    for day in range(28):
        current_date = start_date + datetime.timedelta(days=day)
        mood = get_mood_for_day(day + 1)
        print(f"{current_date.strftime('%Y-%m-%d')} | Day {day+1:02} | {mood}")
    print("-" * 50)

# --- Main Program ---
user_input = input("Enter the start date of your period (YYYY-MM-DD): ")

try:
    period_start_date = datetime.datetime.strptime(user_input, "%Y-%m-%d").date()
    draw_mood_chart(period_start_date)
except ValueError:
    print("❌ Invalid date format. Please use YYYY-MM-DD.")
