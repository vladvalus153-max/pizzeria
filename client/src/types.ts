// Общий тип позиции меню: поле type показывает, какой это вариант
export type MenuItem =
  | {
      type: "pizza";
      id: string;
      name: string;
      price: number;
      available: number;
      sizeCm: number;
    }
  | {
      type: "drink";
      id: string;
      name: string;
      price: number;
      available: number;
      volumeMl: number;
    }
  | {
      type: "snack";
      id: string;
      name: string;
      price: number;
      available: number;
      weightGrams: number;
    };
    