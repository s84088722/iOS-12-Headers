//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/DOMNode.h>

@interface DOMNode (MailExtras)
- (_Bool)mf_isAtEndOfContainerNode:(id)arg1;
- (id)mf_blockNodeAncestor;
- (id)mf_findElementWithTag:(id)arg1 className:(id)arg2 andIdName:(id)arg3;
- (_Bool)mf_isDescendantOfNode:(id)arg1;
- (id)mf_topmostContainingNodeWithNameInArray:(id)arg1;
- (_Bool)mf_isAtBeginningOfContainerNode:(id)arg1;
- (id)mf_firstDescendantBlockQuote;
- (id)mf_highestContainingBlockQuote;
- (_Bool)mf_containsOnlySelectionMarkers;
- (id)mf_containingBlockQuote;
- (id)mf_appendBlockPlaceholder;
- (id)mf_nextSiblingOrAunt;
- (id)mf_traversePreviousNode;
- (id)mf_traverseNextSiblingStayingWithin:(id)arg1;
- (id)mf_traverseNextNodeStayingWithin:(id)arg1;
- (void)mf_fixParagraphsAndQuotesFromMicrosoft;
- (void)_fixParagraphsAndQuotesFromMicrosoftNodesToRemove:(id)arg1;
- (void)recursivelyRemoveMailAttributes;
- (id)mf_commonAncestorWithNode:(id)arg1;
- (_Bool)mf_isQuoteOrWithinQuote;
- (int)mf_quoteLevelDelta;
- (_Bool)mf_containsRichText;
@property(readonly) _Bool mf_isAttachment;
@property(readonly) _Bool mf_isBody;
@end
