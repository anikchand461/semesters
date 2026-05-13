# Support Vector Machine (SVM)

![SVM Diagram](https://upload.wikimedia.org/wikipedia/commons/2/2a/SVM_margin.png)

## What is SVM?

Support Vector Machine (SVM) is a **supervised machine learning algorithm** used for:

- Classification
- Regression
- Pattern recognition
- Image classification
- Face detection

SVM tries to find the **best boundary (hyperplane)** that separates different classes.

---

# Key Idea of SVM

The main goal of SVM is:

> Find the optimal hyperplane with the maximum margin between classes.

---

# Important Terms

| Term            | Meaning                                        |
| --------------- | ---------------------------------------------- |
| Hyperplane      | Decision boundary separating classes           |
| Margin          | Distance between hyperplane and nearest points |
| Support Vectors | Closest data points to the hyperplane          |

---

# Hyperplane Equation

$$
w \cdot x + b = 0
$$

Where:

| Symbol | Meaning              |
| ------ | -------------------- |
| \(w\)  | Weight vector        |
| \(x\)  | Input feature vector |
| \(b\)  | Bias term            |

---

# Types of SVM

## 1. Linear SVM

Used when data is linearly separable.

Example:

- Two clearly separated classes

---

## 2. Non-Linear SVM

Used when data cannot be separated using a straight line.

Uses:

- Kernel Trick

---

# Kernel Functions

## 1. Linear Kernel

$$
K(x_i, x_j) = x_i^T x_j
$$

---

## 2. Polynomial Kernel

$$
K(x_i, x_j) = (x_i^T x_j + 1)^d
$$

---

## 3. RBF Kernel

$$
K(x_i, x_j) = e^{-\gamma ||x_i - x_j||^2}
$$

---

## 4. Sigmoid Kernel

$$
K(x_i, x_j) = \tanh(\alpha x_i^T x_j + c)
$$

---

# Working of SVM

## Steps

1. Plot the training data
2. Find possible hyperplanes
3. Calculate margins
4. Select hyperplane with maximum margin
5. Classify new data points

---

# Example — Binary Classification

![SVM Classification](https://upload.wikimedia.org/wikipedia/commons/f/fe/Kernel_Machine.svg)

Suppose we have two classes:

- Red circles
- Blue squares

SVM finds the best line that separates them with maximum margin.

---

# Advantages of SVM

- Works well with high-dimensional data
- Effective for text classification
- Memory efficient
- Good accuracy
- Works for both linear and non-linear data

---

# Disadvantages of SVM

- Slow for very large datasets
- Hard to choose correct kernel
- Complex mathematical calculations
- Less effective with noisy data

---

# Applications of SVM

- Face Detection
- Image Classification
- Spam Detection
- Handwriting Recognition
- Bioinformatics
- Text Categorization

---

# Comparison with Other Algorithms

| Algorithm     | Speed     | Accuracy | Best For               |
| ------------- | --------- | -------- | ---------------------- |
| SVM           | Medium    | High     | Complex classification |
| Naive Bayes   | Very Fast | Good     | Text data              |
| KNN           | Slow      | Medium   | Small datasets         |
| Decision Tree | Medium    | Good     | Rule-based problems    |

---

# Python Example

```python
from sklearn import svm

# Features
X = [[0, 0], [1, 1]]

# Labels
y = [0, 1]

# Create model
model = svm.SVC(kernel='linear')

# Train model
model.fit(X, y)

# Predict
prediction = model.predict([[2, 2]])

print(prediction)
```

---

# Important Interview Questions

## 1. What is SVM?

A supervised learning algorithm used for classification and regression.

---

## 2. What is a Hyperplane?

A decision boundary separating classes.

---

## 3. What are Support Vectors?

Nearest data points to the hyperplane.

---

## 4. What is Kernel Trick?

Technique used to solve non-linear problems.

---

# Short Notes

## Definition

SVM is a supervised machine learning algorithm that finds the optimal hyperplane for classification.

## Main Goal

Maximize the margin between classes.

## Advantages

- High accuracy
- Effective in high dimensions
- Works with non-linear data

## Disadvantages

- Slow for large datasets
- Complex calculations

## Applications

- Image recognition
- Spam filtering
- Face detection
- Text classification
