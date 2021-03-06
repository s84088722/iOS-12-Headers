/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:48:08 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/AccessibilityBundles/WebKitLegacy.axbundle/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebKitLegacy/__UIWebDocumentViewAccessibility_super.h>

@interface UIWebDocumentViewAccessibility : __UIWebDocumentViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(BOOL)_accessibilityMimicsTextInputResponder;
-(id)_accessibilityResponderElement;
-(BOOL)_accessibilityIsWebDocumentView;
-(BOOL)_accessibilityIsFirstElementForFocus;
-(BOOL)_accessibilityScrollToFrame:(CGRect)arg1 forView:(id)arg2 ;
-(id)_accessibilitySupplementaryHeaderViews;
-(id)_accessibilityScrollStatus;
-(id)_accessibilityEquivalenceTag;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(id)_accessibilityAttributedValueForRange:(NSRange*)arg1 ;
-(id)_accessibilitySpeakThisString;
-(BOOL)_accessibilityScrollingEnabled;
-(void)_accessibilityZoomAtPoint:(CGPoint)arg1 zoomIn:(BOOL)arg2 ;
-(BOOL)_accessibilityIsScrollAncestor;
-(void)accessibilityZoomInAtPoint:(CGPoint)arg1 ;
-(void)accessibilityZoomOutAtPoint:(CGPoint)arg1 ;
-(BOOL)accessibilityScrollUpPage;
-(BOOL)accessibilityScrollDownPage;
-(CGRect)_accessibilityContentFrame;
-(void)_axZoomToCenterWithScale:(CGPoint)arg1 scale:(double)arg2 ;
-(id)_accessibilityRootObject;
-(id)_accessibilityDocumentView;
-(BOOL)_accessibilityHasTextOperations;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)accessibilityScrollRightPage;
-(BOOL)accessibilityScrollLeftPage;
-(void)dealloc;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)shouldGroupAccessibilityChildren;
-(id)accessibilityElements;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)_showTextStyleOptions:(id)arg1 ;
-(void)setSelectedTextRange:(id)arg1 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(void)clearSelection;
-(void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)stopLoading:(id)arg1 ;
-(void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2 ;
@end

