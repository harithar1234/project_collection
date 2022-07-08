#Training
Train the following CNN for image classification. Randomly initialize your network.\
• Input image of size 28 × 28 (images from the MNIST dataset).\
• Convolution layer with 4 kernels of size 5 × 5, ReLU activation, and stride of 1. Ensure that each activation channel
output from this conv layer has the same width and height as its input.\
• Max pooling layer of size 2 × 2 with a stride of 2 along each dimension.\
• Convolution layer with 4 kernels of size 5 × 5 × 4, ReLU activation and stride of 1. As before, ensure that the input and
output width and height match.\
• Max pooling layer of size 2 × 2 with a stride of 2 along each dimension.\
• This network has a flattening layer that is an identity matrix i.e., it simply passes the unravelled vector forward. Note
that there is no need to learn the parameters of this layer.\
• An MLP with one hidden layer that accepts as input the flattening layer output maps it to a hidden layer with 49 nodes
and then onto 10 output nodes. Use ReLU activation for the MLP. The output of the MLP is normalized using the softmax
function.\
• Use cross-entropy loss to find the error at the softmax output layer. Note that the ground-truth labels are one-hot encoded
vectors of 10 dimensions.\

#Back Propagation
• Implement the back propagation algorithm for computing gradients.\
Update the weights of the network using the following variants of SGD.\
(a) Vanilla SGD. Use learning rate η = 0.001. \
(b) Momentum. Use η = 0.001, α = 0.9. \
(c) RMSProp. Use η = 0.001, ρ = 0.9. \
For training, choose 100 images per class from the training set i.e., use 1000 images for training. \
• Shuffle the training data after one epoch i.e., after all the training data points have been passed through the network once. Go
back to the previous step. Do this for 20 epochs. You can experiment with the number of epochs as well.\
• After each epoch compute the error on the training data set. \
