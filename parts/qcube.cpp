
//cube.cpp



GLuint cubeVertexBufferID;
GLunit cubeIndexBufferID;

GLint cubeVertexArrayObjek_id;


void sendDataToOpenGL()

{ //shape1
shapeData shape = ShapeGenerator::makeCube();

glGenBuffers(1, &cubeVertexBufferID);
glBindBuffer(GL_ARRAY_BUFFER, cubeVertexBufferID)
glBufferData(GL_ARRAY_BUFFER ,shape.VertexBufferSize(), shape.vertices, GL_STATIC_DRAW);

glEnableVertexAttribArray(0);
glEnableVertexAttribArray(1);


glGenBuffers(1, &cubeIndexBufferID);
glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, cubeIndexBufferID)
glBufferData(GL_ELEMENT_ARRAY_BUFFER ,shape.indexBufferSize(), shape.indices, GL_STATIC_DRAW);
cubeNumIndices = shape.numIndices;
shape.cleanup();







}



void setupVertexArrays()
{

  glGenVertexArrays(1, &cubeVertexArrayObjek_id);
  //glGenVertexArrays()

  glBindVertexArray(cubeVertexArrayObjek_id);

glBindBuffer(GL_ARRAY_BUFFER,cubeVertexArrayObjek_id);
glVertexAttribPointer (0, 3, GL_FLOAT, GL_FALSE, VERTEX_BYTE_SIZE, 0);
glVertexAttribPointer (1, 3, GL_FLOAT, GL_FALSE, VERTEX_BYTE_SIZE,(char*)(sizeof(float)*3));
glBindBuffer(GL_ELEMENT_ARRAY_BUFFER,cubeVertexArrayObjek_id);

}





paintGLz()

{hlClear (GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT)
glViePort(0,0,with(), height());


mat4 fullTransfprmMatrix;

mat4 viewToProjectionMarix = glm::perspective(49.0f, ((float)width())/height(),0.2f,10.0f);
mat4 worldToViewMatrix =camera.getWorldToViewMatrix();

mat4 worldToProjectionMatrix = viewToProjectionMatrix * worldToViewMatrix;


//shapes...
glBindVertexArray(cubeVertexArrayObjek_id);

mat4 cube1modeltoworldmatrix = |
glm::translate(vec3(1.f,1.f,1.f)
glm::rotate(float, , vec3(flot,flot,flot));

fullTransfprmMatrix = worldToProjectionMatrix*cube1modeltoworldmatrix;
glUniformMatrix4fv(fullTransfprmMatrix,1,GL_FALSE,&fullTransfprmMatrix[0][0])

glDrawElements(GL_TRIANGLES,cubeNumIndices, GL_UNSIGNED_SHORT,0);



}



sendMouseTraciong

glewInit();
glEnable(GL_DEPTH_TEST)

glBindBuffer();
glVertexA

mat4
