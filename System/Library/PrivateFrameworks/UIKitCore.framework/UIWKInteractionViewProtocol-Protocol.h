//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSAttributedString, NSString, UIView;

@protocol UIWKInteractionViewProtocol
- (void)selectWordForReplacement;
- (NSString *)selectedText;
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 withBoundary:(long long)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 completionHandler:(void (^)(void))arg3;
- (void)beginSelectionInDirection:(long long)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)selectPositionAtPoint:(struct CGPoint)arg1 completionHandler:(void (^)(void))arg2;
- (void)_cancelLongPressGestureRecognizer;
- (NSArray *)webSelectionRects;
- (_Bool)textInteractionGesture:(long long)arg1 shouldBeginAtPoint:(struct CGPoint)arg2;
- (_Bool)hasSelectablePositionAtPoint:(struct CGPoint)arg1;
- (_Bool)hasMarkedText;
- (NSString *)markedText;
- (void)applyAutocorrection:(NSString *)arg1 toString:(NSString *)arg2 withCompletionHandler:(void (^)(UIWKAutocorrectionRects *))arg3;
- (void)requestAutocorrectionRectsForString:(NSString *)arg1 withCompletionHandler:(void (^)(UIWKAutocorrectionRects *))arg2;
- (void)requestAutocorrectionContextWithCompletionHandler:(void (^)(UIWKAutocorrectionContext *))arg1;
- (struct CGRect)textLastRect;
- (struct CGRect)textFirstRect;
- (void)changeSelectionWithTouchesFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 withGesture:(long long)arg3 withState:(long long)arg4;
- (void)changeSelectionWithGestureAt:(struct CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3;

@optional
- (void)moveSelectionAtBoundary:(id)arg1 inDirection:(long long)arg2 completionHandler:(void (^)(void))arg3;
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 fromPoint:(struct CGPoint)arg3 completionHandler:(void (^)(void))arg4;
- (void)moveByOffset:(long long)arg1;
- (struct CGRect)unobscuredContentRect;
- (double)inverseScale;
- (UIView *)unscaledView;
- (void)selectWordBackward;
- (_Bool)isReplaceAllowed;
- (void)replaceText:(NSString *)arg1 withText:(NSString *)arg2;
- (_Bool)pointIsNearMarkedText:(struct CGPoint)arg1;
- (void)requestDictationContext:(void (^)(NSString *, NSString *, NSString *))arg1;
- (void)replaceDictatedText:(NSString *)arg1 withText:(NSString *)arg2;
- (void)clearSelection;
- (void)changeSelectionWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2 baseIsStart:(_Bool)arg3 withFlags:(long long)arg4;
- (NSAttributedString *)attributedMarkedText;
@end
