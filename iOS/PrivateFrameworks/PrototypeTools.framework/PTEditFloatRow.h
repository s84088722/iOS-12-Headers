//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrototypeTools/PTSRow.h>

@interface PTEditFloatRow : PTSRow
{
    unsigned long long _precision;
}

@property(nonatomic) unsigned long long precision; // @synthesize precision=_precision;
- (id)init;
- (id)between:(double)arg1 and:(double)arg2;
- (id)precision:(unsigned long long)arg1;

@end

