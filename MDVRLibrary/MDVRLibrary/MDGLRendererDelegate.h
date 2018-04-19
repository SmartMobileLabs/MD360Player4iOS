//
//  MDGLRendererDelegate.h
//  MD360Player4IOS
//
//  Created by ashqal on 16/4/9.
//  Copyright © 2016年 ashqal. All rights reserved.
//

#ifndef MDGLRendererDelegate_h
#define MDGLRendererDelegate_h
#import <OpenGLES/EAGL.h>

@protocol MDGLRendererDelegate <NSObject>
@required
- (void) rendererOnCreated:(EAGLContext*)context object:(NSObject*)object;
- (void) rendererOnChanged:(EAGLContext*)context width:(int)width height:(int)height object:(NSObject*)object;
- (void) rendererOnDrawFrame:(EAGLContext*)context width:(int)width height:(int)height object:(NSObject*)object;
- (void) rendererOnDestroy:(EAGLContext*) context;
@end

#endif /* MDGLRendererDelegate_h */
