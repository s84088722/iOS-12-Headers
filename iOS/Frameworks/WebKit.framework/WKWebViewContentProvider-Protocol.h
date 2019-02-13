//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/NSObject-Protocol.h>

@class NSData, NSString, UIScrollView, UIView, WKWebView;

@protocol WKWebViewContentProvider <NSObject>
@property(readonly, nonatomic) UIView *web_contentView;
- (void)web_hideFindUI;
- (void)web_findString:(NSString *)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (void)web_countStringMatches:(NSString *)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (void)web_didSameDocumentNavigation:(unsigned int)arg1;
- (void)web_setFixedOverlayView:(UIView *)arg1;
- (void)web_computedContentInsetDidChange;
- (void)web_setOverlaidAccessoryViewsInset:(struct CGSize)arg1;
- (void)web_setMinimumSize:(struct CGSize)arg1;
- (void)web_setContentProviderData:(NSData *)arg1 suggestedFilename:(NSString *)arg2;
- (id)web_initWithFrame:(struct CGRect)arg1 webView:(WKWebView *)arg2 mimeType:(NSString *)arg3;

@optional
@property(readonly, nonatomic) _Bool web_isBackground;
@property(readonly, nonatomic) NSString *web_suggestedFilename;
@property(readonly, nonatomic) NSData *web_dataRepresentation;
- (void)web_beginAnimatedResizeWithUpdates:(void (^)(void))arg1;
- (void)web_scrollViewDidZoom:(UIScrollView *)arg1;
- (void)web_scrollViewDidEndZooming:(UIScrollView *)arg1 withView:(UIView *)arg2 atScale:(double)arg3;
- (void)web_scrollViewWillBeginZooming:(UIScrollView *)arg1 withView:(UIView *)arg2;
- (void)web_scrollViewDidScroll:(UIScrollView *)arg1;
@end

