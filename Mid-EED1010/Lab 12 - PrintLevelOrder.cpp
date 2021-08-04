void printLevelOrder(TreeNodePtr root){
	
	int h = height(root);
	int i;
	for(i=1; i<=h; i++){
		printlevel(root,i);
	}
}/* end printLevelOrder function */

void printlevel(TreeNodePtr root, int level){
	
	if(root == NULL)
	return;
	if(level == 1)
	printf("%d ",root->data);
	else if(level>1){
		
		printlevel(root->left, level-1);
		printlevel(root->right, level-1);
	}
}/* end printlevel function */

int height(TreeNodePtr node){
	
	if(node==NULL)
	return 0;
	else
	{
		int lheight = height(node->leftNode);
		int rheight = height(node->rightNode);
		
		if(lheight > rheight)
		return(lheight+1);
		else
		return(rheight+1);
	}
}/* end height function */
