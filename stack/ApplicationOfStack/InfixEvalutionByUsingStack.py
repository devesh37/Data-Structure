import operator

ops = {
    '+' : operator.add,
    '-' : operator.sub,
    '*' : operator.mul,
    '/' : operator.truediv,  
    '%' : operator.mod,
    '^' : operator.xor,
}
def evalute(exp):
    operandStack=list()
    operatorStack=list()
    for i in exp:
        if(i>='0' and i<='9'):
            operandStack.append(int(i))
        else:
            operatorStack.append((i))
    while(operatorStack):
        opr=operatorStack.pop()
        op1=operandStack.pop()
        op2=operandStack.pop()
        operandStack.append(ops[opr](op2,op1))
    return(operandStack.pop())
result=evalute('2*2+2/4')
print(result)
            