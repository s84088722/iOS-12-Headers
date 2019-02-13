//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/MFMessageBodySubparser.h>

@class DOMRange, NSMutableArray;
@protocol MFMessageBodyElement_Private;

@interface MFMessageBodyDOMQuoteSubparser : MFMessageBodySubparser
{
    CDUnknownBlockType _foundDedentedAttributionRangeBlock;
    CDUnknownBlockType _foundTrailingEmptyQuoteRangeBlock;
    id <MFMessageBodyElement_Private> _lastUnindentedElement;
    id <MFMessageBodyElement_Private> _lastUnindentedAttributionHint;
    NSMutableArray *_unindentedSiblingNodes;
    unsigned long long _unindentedSiblingGap;
    DOMRange *_trailingEmptyQuoteRange;
    unsigned long long _trailingEmptyQuoteLevel;
}

- (_Bool)doesRange:(id)arg1 containAnyElementWithTagName:(id)arg2;
- (void)messageBodyParser:(id)arg1 foundMessageBodyElement:(id)arg2;
- (void)_enumerateSurroundableRangesInRange:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)setFoundTrailingEmptyQuoteRangeBlock:(CDUnknownBlockType)arg1;
- (void)setFoundDedentedAttributionRangeBlock:(CDUnknownBlockType)arg1;
- (void)copyBlocks;
- (void)dealloc;

@end

