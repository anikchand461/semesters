# K-Means Clustering

![K-Means Clustering](https://upload.wikimedia.org/wikipedia/commons/e/ea/K-means_convergence.gif)

## What is K-Means Clustering?

K-Means Clustering is an **unsupervised machine learning algorithm** used to group similar data points into clusters.

It divides the dataset into **K clusters** based on similarity.

---

# Main Idea of K-Means

The algorithm:

1. Chooses K centroids
2. Assigns data points to nearest centroid
3. Updates centroids
4. Repeats until clusters stabilize

---

# Important Terms

| Term     | Meaning                      |
| -------- | ---------------------------- |
| Cluster  | Group of similar data points |
| Centroid | Center point of a cluster    |
| K        | Number of clusters           |

---

# Distance Formula

K-Means usually uses **Euclidean Distance**.

$$
d = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}
$$

Where:

| Symbol       | Meaning                  |
| ------------ | ------------------------ |
| \(x_1, y_1\) | First point coordinates  |
| \(x_2, y_2\) | Second point coordinates |
| \(d\)        | Distance between points  |

---

# Working of K-Means

## Steps

1. Select number of clusters \(K\)
2. Initialize centroids randomly
3. Assign points to nearest centroid
4. Recalculate centroids
5. Repeat until no changes occur

---

# Example of K-Means Clustering

![Cluster Example](https://upload.wikimedia.org/wikipedia/commons/c/c9/Cluster_analysis.png)

Suppose we have customer data:

| Customer | Spending Score |
| -------- | -------------- |
| A        | High           |
| B        | High           |
| C        | Low            |
| D        | Low            |

If \(K = 2\):

- Cluster 1 → High spenders
- Cluster 2 → Low spenders

---

# Choosing the Value of K

## Elbow Method

Used to find the optimal number of clusters.

The graph looks like an elbow shape.

---

# Objective Function

K-Means minimizes:

$$
J = \sum_{i=1}^{k} \sum_{x_j \in C_i} ||x_j - \mu_i||^2
$$

Where:

| Symbol    | Meaning       |
| --------- | ------------- |
| \(J\)     | Cost function |
| \(C_i\)   | Cluster       |
| \(\mu_i\) | Centroid      |

---

# Types of Clustering

## 1. Hard Clustering

Each point belongs to only one cluster.

Example:

- K-Means

---

## 2. Soft Clustering

Points can belong to multiple clusters.

Example:

- Fuzzy C-Means

---

# Advantages of K-Means

- Simple and easy to implement
- Fast for large datasets
- Efficient clustering
- Works well with numerical data

---

# Disadvantages of K-Means

- Need to choose K manually
- Sensitive to outliers
- Different initial centroids may give different results
- Works poorly with non-spherical clusters

---

# Applications of K-Means

- Customer Segmentation
- Image Compression
- Recommendation Systems
- Market Analysis
- Document Clustering

---

# Comparison with Other Algorithms

| Algorithm     | Type         | Speed     | Best For            |
| ------------- | ------------ | --------- | ------------------- |
| K-Means       | Unsupervised | Fast      | Clustering          |
| SVM           | Supervised   | Medium    | Classification      |
| Naive Bayes   | Supervised   | Very Fast | Text data           |
| Decision Tree | Supervised   | Medium    | Rule-based problems |

---

# Python Example

```python
from sklearn.cluster import KMeans
import numpy as np

# Data
X = np.array([
    [1, 2],
    [1, 4],
    [1, 0],
    [10, 2],
    [10, 4],
    [10, 0]
])

# Create model
kmeans = KMeans(n_clusters=2)

# Train model
kmeans.fit(X)

# Cluster labels
print(kmeans.labels_)
```

---

# Important Interview Questions

## 1. What is K-Means?

An unsupervised algorithm used for clustering.

---

## 2. What is a Centroid?

The center point of a cluster.

---

## 3. What is the Elbow Method?

A method to determine the optimal value of K.

---

## 4. Is K-Means supervised or unsupervised?

Unsupervised.

---

# Short Notes

## Definition

K-Means is an unsupervised machine learning algorithm used to divide data into K clusters.

## Main Goal

Group similar data points together.

## Advantages

- Fast
- Simple
- Efficient

## Disadvantages

- Sensitive to outliers
- Need to choose K manually

## Applications

- Customer segmentation
- Image compression
- Market analysis
- Recommendation systems
