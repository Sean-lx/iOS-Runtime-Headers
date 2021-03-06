/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRoundedCornerOverlayView : UIImageView {
    double  _cornerRadius;
    double  _displayScale;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    struct { 
        bool image; 
    }  _needsUpdateFlags;
    UIColor * _overlayColor;
}

@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly) UIColor *overlayColor;

- (void).cxx_destruct;
- (void)_invalidateImage;
- (bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_updateImageIfNeeded;
- (double)cornerRadius;
- (double)displayScale;
- (id)mutableChangeObject;
- (id)overlayColor;
- (void)performChanges:(id /* block */)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDisplayScale:(double)arg1;
- (void)setOverlayColor:(id)arg1;

@end
