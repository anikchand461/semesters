# K-Medoids Clustering

![K-Medoids Clustering](https://upload.wikimedia.org/wikipedia/commons/7/74/K-medoids_vs_k-means.svg)

## What is K-Medoids?

K-Medoids is an **unsupervised machine learning clustering algorithm** similar to K-Means.

It groups data into clusters using **actual data points** as cluster centers instead of mean values.

These center points are called **Medoids**.

---

# Main Idea of K-Medoids

The algorithm:

1. Selects K medoids randomly
2. Assigns points to nearest medoid
3. Replaces medoids to reduce total distance
4. Repeats until clusters stabilize

---

# Important Terms

| Term    | Meaning                                  |
| ------- | ---------------------------------------- |
| Cluster | Group of similar data points             |
| Medoid  | Actual data point representing a cluster |
| K       | Number of clusters                       |

---

# Difference Between K-Means and K-Medoids

| Feature               | K-Means    | K-Medoids              |
| --------------------- | ---------- | ---------------------- |
| Center                | Mean value | Actual data point      |
| Sensitive to Outliers | Yes        | No                     |
| Accuracy              | Medium     | Better with noisy data |
| Speed                 | Faster     | Slower                 |

---

# Distance Formula

K-Medoids usually uses Euclidean Distance.

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

# Working of K-Medoids

## Steps

1. Select K random medoids
2. Assign each point to nearest medoid
3. Compute total cost
4. Swap medoid with non-medoid point
5. If cost decreases, update medoid
6. Repeat until no improvement occurs

---

# Example of K-Medoids

![Clustering Example](https://upload.wikimedia.org/wikipedia/commons/c/c9/Cluster_analysis.png)

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

The medoid is the actual customer point nearest to the cluster center.

---

# Cost Function

K-Medoids minimizes total dissimilarity:

$$
Cost = \sum_{i=1}^{n} distance(point_i, medoid)
$$

---

# PAM Algorithm

K-Medoids commonly uses:

## PAM (Partitioning Around Medoids)

PAM works by:

- Selecting medoids
- Swapping medoids
- Minimizing total clustering cost

---

# Advantages of K-Medoids

- Robust to outliers
- Works well with noisy data
- Uses real data points as centers
- More stable than K-Means

---

# Disadvantages of K-Medoids

- Slower than K-Means
- Computationally expensive
- Not suitable for very large datasets

---

# Applications of K-Medoids

- Customer Segmentation
- Fraud Detection
- Medical Data Analysis
- Bioinformatics
- Recommendation Systems

---

# Comparison with Other Algorithms

| Algorithm   | Type         | Outlier Handling | Speed     |
| ----------- | ------------ | ---------------- | --------- |
| K-Means     | Unsupervised | Poor             | Fast      |
| K-Medoids   | Unsupervised | Good             | Slow      |
| SVM         | Supervised   | Medium           | Medium    |
| Naive Bayes | Supervised   | Medium           | Very Fast |

---

# Python Example

```python
from sklearn_extra.cluster import KMedoids
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
kmedoids = KMedoids(n_clusters=2)

# Train model
kmedoids.fit(X)

# Cluster labels
print(kmedoids.labels_)
```

---

# Important Interview Questions

## 1. What is K-Medoids?

An unsupervised clustering algorithm using actual data points as cluster centers.

---

## 2. What is a Medoid?

A real data point representing the center of a cluster.

---

## 3. Difference between K-Means and K-Medoids?

K-Means uses mean values, while K-Medoids uses actual data points.

---

## 4. Why is K-Medoids better for noisy data?

Because it is less sensitive to outliers.

---

# Short Notes

## Definition

K-Medoids is an unsupervised clustering algorithm that groups data using actual data points as cluster centers.

## Main Goal

Minimize total distance between points and medoids.

## Advantages

- Robust to outliers
- Stable clustering

## Disadvantages

- Slow for large datasets
- Computationally expensive

## Applications

- Fraud detection
- Customer segmentation
- Medical analysis
