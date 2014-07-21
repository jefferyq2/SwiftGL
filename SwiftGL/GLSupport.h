//
//  GLSupport.h
//  SwiftGL
//
//  Created by Scott Bennett on 2014-06-08.
//  Copyright (c) 2014 Scott Bennett. All rights reserved.
//

#import <SwiftGL/SwiftGL.h>

#pragma mark - Conversions

/*
 * Swift (in its current state) appears to be lacking the option to easily switch
 * between certain types -- especially when it comes to using C Types / Pointers
 * These conversion functions are here to augment and remove those limitations
 *
 * These functions will be removed as they are no longer needed
 * I recommend you try not to rely on them existing
 */

#pragma mark - Shader Support Functions

unsigned int swglCompileShader(GLenum type, NSString *source);
BOOL swglVerifyProgram(unsigned int program);

#pragma mark - Texture Support Functions

void *swglLoadTexture(NSString *filename, GLsizei *width, GLsizei *height, BOOL flipVertical);
