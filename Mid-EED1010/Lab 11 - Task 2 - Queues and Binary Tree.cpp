void insertNode( TreeNodePtr *treePtr, int data ){
	
	/* if tree is empty */
	if(*treePtr==NULL){
		*treePtr =(struct treeNode*)malloc(sizeof(TreeNode));
		
		/* if memory was allocated then assign data */ 
		if(*treePtr!=NULL){
			(*treePtr)->data = data;
			(*treePtr)->leftPtr=NULL;
			(*treePtr)->rightPtr=NULL;
		}/* end if */
		else{
			printf("%d not inserted. No memory available.\n",data);
		}/* end else */
	}/* end if */
	else{ /* tree is not empty */ 
	    /* data to insert is less than data in current node */
		if(data<(*treePtr)->data){
			insertNode(&((*treePtr)->leftPtr),data);
		}/* end if */
		/* data to insert is greater than data in current node */
		else if(value>(*treePtr)-data){
			insertNode(&((*treePtr)->rightPtr),data);
		}/* end else if */
		else{ /* duplicate data value ignored */
			printf("dup");
		}/* end else */
	}/* end else */
}/* end function insertNode */
