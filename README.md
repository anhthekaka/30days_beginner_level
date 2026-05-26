# 6 Nhóm Bài Toán AI × Tài Chính

Trang phân tích tương tác 6 nhóm bài toán AI ứng dụng trong lĩnh vực tài chính tại Việt Nam.

## Xem trực tiếp

> Sau khi bật GitHub Pages (xem bên dưới), truy cập:  
> `https://<your-username>.github.io/<repo-name>/`

## Nội dung

Mỗi card trình bày một nhóm bài toán gồm:
- Trạng thái ứng dụng tại Việt Nam
- Chỉ số kỹ thuật / nhu cầu / cấp thiết
- Vấn đề cốt lõi & kỹ thuật AI/Quantum liên quan
- Giai đoạn triển khai và lỗ hổng hiện tại
- Cơ hội thị trường

## Cách deploy lên GitHub Pages

### 1. Tạo repo mới trên GitHub

```bash
git init
git add .
git commit -m "init: ai finance cards"
git branch -M main
git remote add origin https://github.com/<your-username>/<repo-name>.git
git push -u origin main
```

### 2. Bật GitHub Pages

1. Vào **Settings** → **Pages**
2. Source: `Deploy from a branch`
3. Branch: `main` / `/ (root)`
4. Nhấn **Save**

Sau ~1 phút trang sẽ live tại `https://<your-username>.github.io/<repo-name>/`

## Cấu trúc

```
.
├── index.html   # Toàn bộ app (HTML + CSS + JS, không phụ thuộc)
└── README.md
```

Không cần build step, không cần Node.js — chỉ một file HTML duy nhất.
