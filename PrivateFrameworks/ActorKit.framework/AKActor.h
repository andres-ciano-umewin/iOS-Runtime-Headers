/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ActorKit.framework/ActorKit
 */

@class AKMailbox;



@interface AKActor : NSObject <AKActor>
{
    AKMailbox *_mailbox;
}


- (id)deferredReply;
- (id)startMigrantDispatchQueue;
- (id)mailbox;
- (id)startThreadDispatchQueue;
- (id)send;
- (id)init;
- (void)dealloc;

@end