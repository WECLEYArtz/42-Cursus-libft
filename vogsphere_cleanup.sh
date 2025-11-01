
git checkout -b vogsphere

rm -rf libft.a
rm -rf .tests
rm -rf *.o
rm -rf todo.md
rm -rf ./vogsphere_cleanup.sh

git add .
git commit -m "auto delete"
git push -f 42 vogsphere:main
