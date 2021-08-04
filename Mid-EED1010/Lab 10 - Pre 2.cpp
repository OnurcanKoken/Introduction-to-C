void convertToPostfix( char infix[], char postfix[] )
{
    StackNodePtr startPtr = NULL; /* points to stack top */
    int i, j = 0; /* counters */

    infix [ strlen(infix) ] = ')'; // assign ')' to end of infix
    infix [ strlen(infix) ] = '\0'; // assign '\n' to end of infix
    push(&startPtr, '('); // insert '(' as a first char of startPtr

    while( !isEmpty( startPtr ) ){ // while startPtr is not empty
        for(i = 0; i < strlen( infix ); i++){ // check all of the characters of array infix
            if ( isdigit( infix[ i ] ) ){ // check if the char is a digit or not
                postfix[ j ] = infix[ i ]; // assign to postfix
                j++; // increase counter by one
            }//end of if...
            else if ( infix[ i ] == '(' ){ // check if the char of infix is '('
                push ( &startPtr, infix[ i ] ); // add the char to beginning of startPtr
            }//end of else if...
            else if ( !isOperator( infix[ i ] )){ // check if the char of infix is an operator
                // while first char of startPtr is not an operator
                while( !isOperator( stackTop( startPtr ) ) ){ 
                    // check if startPtr's first char is greater than infix's char
					if( precedence( stackTop( startPtr ), infix[ i ] ) >=0){
					// assign the first char of startPtr to postfix after deleting
                    postfix[ j ] = pop( &startPtr ); 
                    j++; // increase counter by one
                    }//end of if...
                    else{
                        break; // exit from the loop
                    }//end of else...
                }//end of while..
                push( &startPtr, infix[ i ] ); // add the char to beginning of startPtr
            }//end of else if...
            else{
            	//while startPtr's first char is not '('
                while( stackTop( startPtr ) != '(' ){ 
                    // check if the first char of startPtr is an operator
                    if( !isOperator( stackTop( startPtr ) ) ){
                    // assign the first char of startPtr to postfix after deleting
					postfix[ j ] = pop( &startPtr ); 
                    j++; // increase counter by one
                    }//end of if...
                }//end of while...
                pop( &startPtr ); // delete the first value of startPtr
            }//end of else...
        }//end of for...
    }//end of while...
    postfix[ strlen( postfix ) ] = '\0'; // assign '\n' to end of postfix
}// end of convertToPostfix...
