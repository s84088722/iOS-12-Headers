//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EDString;

__attribute__((visibility("hidden")))
@interface EDComment : NSObject
{
    _Bool _visible;
    int _rowIndex;
    int _columnIndex;
    EDString *_author;
}

@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) EDString *author; // @synthesize author=_author;
@property(nonatomic) int columnIndex; // @synthesize columnIndex=_columnIndex;
@property(nonatomic) int rowIndex; // @synthesize rowIndex=_rowIndex;
- (id)description;
- (void)dealloc;

@end

