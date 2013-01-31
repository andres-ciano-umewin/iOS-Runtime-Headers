/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class _UIAsyncInvocation, <SKStoreProductViewControllerDelegatePrivate>, SKInvocationQueueProxy<SKUIServiceProductPageViewController>, <SKStoreProductViewControllerDelegate>, SKRemoteProductViewController, NSDictionary, NSString;

@interface SKStoreProductViewController : UIViewController  {
    NSString *_affiliateIdentifier;
    _UIAsyncInvocation *_cancelRequest;
    NSString *_clientIdentifier;
    <SKStoreProductViewControllerDelegatePrivate> *_delegate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _loadBlock;

    int _productPageStyle;
    SKRemoteProductViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceProductPageViewController> *_serviceProxy;
    NSDictionary *_scriptContextDictionary;
}

@property <SKStoreProductViewControllerDelegate> * delegate;
@property(copy) NSString * affiliateIdentifier;
@property(copy) NSString * clientIdentifier;
@property(copy) NSDictionary * scriptContextDictionary;
@property int productPageStyle;

+ (void)getCanLoadURL:(id)arg1 completionBlock:(id)arg2;
+ (void)_validateURL:(id)arg1 withSheetInfo:(id)arg2 completionBlock:(id)arg3;

- (void)setClientIdentifier:(id)arg1;
- (id)clientIdentifier;
- (void)loadProductWithParameters:(id)arg1 completionBlock:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setAffiliateIdentifier:(id)arg1;
- (id)affiliateIdentifier;
- (void)_addRemoteView;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)scriptContextDictionary;
- (void)_resetRemoteViewController;
- (void)_presentPageWithRequest:(id)arg1 animated:(BOOL)arg2;
- (void)_didFinishWithResult:(int)arg1;
- (void)loadProductWithURL:(id)arg1 completionBlock:(id)arg2;
- (void)loadProductWithRequest:(id)arg1 completionBlock:(id)arg2;
- (void)_loadDidFinishWithResult:(BOOL)arg1 error:(id)arg2;
- (void)_didFinish;
- (int)productPageStyle;
- (void)_throwUnsupportedPresentationException;
- (void)_requestRemoteViewController;
- (void)setScriptContextDictionary:(id)arg1;
- (void)setProductPageStyle:(int)arg1;

@end