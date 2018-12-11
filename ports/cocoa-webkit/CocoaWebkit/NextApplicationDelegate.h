//
// Copyright © 2017-2018 Atlas Engineer LLC.
// Use of this file is governed by the license that can be found in LICENSE.
//

#import "AutokeyDictionary.h"
#import <AppKit/AppKit.h>
#import <Foundation/Foundation.h>

@interface NextApplicationDelegate : NSObject <NSApplicationDelegate>

@property (strong, atomic, readwrite) AutokeyDictionary* windows;
@property (strong, atomic, readwrite) AutokeyDictionary* buffers;

- (NSString*)windowMake;
- (void)window:(NSString*)key setTitle:(NSString*)title;
- (bool)windowDelete:(NSString*)key;
- (NSString*)windowActive;
- (bool)windowExists:(NSString*)key;
- (bool)setActiveBufferForWindow:(NSString*)window buffer:(NSString*)buffer;
- (int)setMinibufferHeightForWindow:(NSString*)windowKey height:(int)height;
- (NSString*)bufferMake;
- (bool)bufferDelete:(NSString*)key;
- (NSString*)bufferEvaluateJavaScript:(NSString*)bufferKey javaScript:(NSString*)javaScript;
- (NSString*)minibufferEvaluateJavaScript:(NSString*)windowKey javaScript:(NSString*)javaScript;

@end
