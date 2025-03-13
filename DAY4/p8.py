from collections import Counter
def max_frames(sticks):
    stick_counts = Counter(sticks) 
    pairs = 0
    square_frames = 0
    
    for length, count in stick_counts.items():   
        pairs += count // 2  
        square_frames += count // 4
    frames = pairs // 2
    return frames

sticks = [2, 2, 3, 2, 3, 2]
print(max_frames(sticks))  
