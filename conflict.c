merge conflict를 해결하려면 충돌된 코드를 수정하는 것이 중요하다
자세하게 보면 먼저 git checkout master 브랜치로 이동한다. 그리고git pull origin master를 해서 최신 업데이트된 리모트 저장소의 master 브랜치를 나의 로컬 master에 엎어준다 그리고 git checkout을 통해 충돌났던 브랜치로 이동하고 이 브랜치와 최신버전의 로컬 master브랜치를 merge해준다. 명령어는 git merge master이다.
이 과정을 거치면 pull request를 했을 때 충돌이 났던 상황이 재연되고 다른 작업자가 수정해놓은 최신버전과 현재 내가 수정한 branch가 충돌된 것이다. 이렇게 충돌된 파일이 확인되면, 편집창에 드러가 해당파일을 수정해야한다. 저장된 표식은 모두 지우고 현재파일에서 남기고 싶은 부분만 남긴 다음 저장한다. 그리고 나서 다시 git add, commit,push,pull request를 하면 해결된다.
