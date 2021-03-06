/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoTileCloudPlaceholderView : UIView <PLTilePlaceholderView> {
    <PLPhotoTileCloudPlaceholderViewDelegate> *_delegate;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _imageRect;
    BOOL _indicatorIsVisible;
    double _lastViewPhaseChangeDate;
    UIView *_loadingContainerView;
    UIButton *_loadingErrorButton;
    PLRoundProgressView *_loadingIndicatorView;
    BOOL _showingError;
    BOOL _showingLoading;
    BOOL _toolbarVisible;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_retryDownload;
- (void)dealloc;
- (void)fadeOutSoonIfNeededAndRemoveFromSuperview:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setImageRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setRetryDelegate:(id)arg1;
- (void)setToolbarVisible:(BOOL)arg1;
- (void)showErrorIndicator;
- (void)showLoadingIndicator;
- (void)showLoadingIndicatorWhenReady;
- (void)updateCloudDownloadProgress:(float)arg1;

@end
