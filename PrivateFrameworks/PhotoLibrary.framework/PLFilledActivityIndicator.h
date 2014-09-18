/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIActivityIndicatorView;

@interface PLFilledActivityIndicator : UIView {
    UIActivityIndicatorView *_indicatorView;
}

- (void)dealloc;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isAnimating;
- (bool)isOpaque;
- (void)startAnimatingAfterDelay:(double)arg1;
- (void)stopAnimating;

@end