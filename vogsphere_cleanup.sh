
git branch -D vogsphere
git checkout -b vogsphere

rm -rf libft.a
rm -rf .tests
rm -rf *.o
rm -rf todo.md

git add .
git commit -m "auto delete"
git push -f 42 vogsphere:main

rm -rf ./vogsphere_cleanup.sh
