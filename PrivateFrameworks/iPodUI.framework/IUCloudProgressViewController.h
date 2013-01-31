/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class UIProgressView, UIImageView, NSTimer;

@interface IUCloudProgressViewController : IUiPodViewController  {
    UIImageView *_cloudImageView;
    NSTimer *_cloudProgressTimer;
    UIProgressView *_cloudProgressView;
}


- (void)_updateProgressTimerDidFire:(id)arg1;
- (void)_updateInProgressDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end