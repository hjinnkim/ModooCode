class Human {
  // ...
};
class HandsomeHuman : public Human {
  // ...
};
class SmartHuman : public Human {
  // ...
};
class Me : public HandsomeHuman, public SmartHuman {
  // ...
};

// Deadful diamond derivation or Deadful diamond inheritance

// To solve this

class Human2 {
  // ...
};
class HandsomeHuman2 : public virtual Human2 {
  // ...
};
class SmartHuman2 : public virtual Human2 {
  // ...
};
class Me2 : public HandsomeHuman2, public SmartHuman2 {
  // ...
};

// In this way, Human2 is inherited only once