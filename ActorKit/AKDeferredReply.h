/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>

@class NSInvocation, NSConditionLock;

@interface AKDeferredReply : NSObject {
	NSInvocation* _invocation;
	NSConditionLock* _blockingLock;
}
+(AKDeferredReply*)currentReply;
+(void)initialize;
-(void)becomeCurrentReply;
-(void)resignCurrentReply;
-(NSInvocation*)invocation;
-(void)setReturnValue:(void*)value;
-(void)sendReply;
/// Raise exception.
-(id)init;
-(id)initWithInvocation:(NSInvocation*)invocation andBlockingLock:(NSConditionLock*)lock;
-(void)dealloc;
@end
