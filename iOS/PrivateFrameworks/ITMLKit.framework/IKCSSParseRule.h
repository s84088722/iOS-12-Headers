//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKCSSParseObject.h>

@class IKArray, IKCSSParseBlock;

@interface IKCSSParseRule : IKCSSParseObject
{
    IKArray *_prelude;
    IKCSSParseBlock *_block;
    struct _NSRange __endRange;
}

@property(nonatomic, setter=_setEndRange:) struct _NSRange _endRange; // @synthesize _endRange=__endRange;
@property(retain, nonatomic) IKCSSParseBlock *block; // @synthesize block=_block;
@property(retain, nonatomic) IKArray *prelude; // @synthesize prelude=_prelude;
- (void).cxx_destruct;
- (id)description;
- (struct _NSRange)range;
- (id)init;

@end

