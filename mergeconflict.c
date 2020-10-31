merge comflict  해결방법
-> 충돌된 코드를 바꾸는 것이 중요하다
git checkout master 브랜치로 이동하고 git pull origin master로 최신 업데이트된 리모트 저장소의 master브랜치로 나의 로컬 master에 엎어준다 
그리고 git checkout 을 통해 충돌났던 브랜치로 이동하고, 이 브랜치와 최신버전의 로컬 master 브랜치를 merge 해준다. 명령어는 git merge master이다
이 과정을 거치면, pull request를 했을 때 충돌이 났던 상황이 다시 나타난다. 이는 다른 작업자가 수정해놓은 최신버전과 현재 내가 수정한 branch가 충돌된 것이다. 이렇게 충돌된 파일이 확인되면, 편집창에 들어가 해당파일을 수정하고 생성된 표식들은 그대로 저장되므로 모두 지우고 현재 파일에서 남기고 싶은 부분만 남긴 다음에 저장한다 그리고 나서 다시 git add, commit,push,pull request를 하면 해결된다. 
