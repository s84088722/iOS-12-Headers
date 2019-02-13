//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIAccessibilityElementTraversalOptions;

@interface UIAccessibilityHierarchyEncoder : NSObject
{
    _Bool _shouldResolveRemoteElements;
    id _rootElement;
    UIAccessibilityElementTraversalOptions *_traversalOptions;
}

@property(nonatomic) _Bool shouldResolveRemoteElements; // @synthesize shouldResolveRemoteElements=_shouldResolveRemoteElements;
@property(retain, nonatomic) UIAccessibilityElementTraversalOptions *traversalOptions; // @synthesize traversalOptions=_traversalOptions;
@property(retain, nonatomic) id rootElement; // @synthesize rootElement=_rootElement;
- (void).cxx_destruct;
- (void)_resolveLeafElementsForRemoteElement:(id)arg1 rootElement:(id)arg2 addingToLeafElementDescriptions:(id)arg3;
- (struct CGRect)_convertAccessibilityFrameOfElement:(id)arg1 toViewSpaceOfContainer:(id)arg2 remoteParent:(id)arg3;
- (id)encodeWithError:(id *)arg1;
- (id)initWithRootElement:(id)arg1 traversalOptions:(id)arg2;

@end

