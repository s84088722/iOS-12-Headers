//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PKPassFieldTemplate;

@interface PKPassBucketTemplate : NSObject
{
    _Bool _sitsOnStripImage;
    long long _bucketAlignment;
    double _minFieldPadding;
    PKPassFieldTemplate *_defaultFieldTemplate;
    unsigned long long _maxFields;
    NSMutableArray *_fieldTemplates;
    struct CGRect _bucketRect;
}

@property(retain, nonatomic) NSMutableArray *fieldTemplates; // @synthesize fieldTemplates=_fieldTemplates;
@property(nonatomic) _Bool sitsOnStripImage; // @synthesize sitsOnStripImage=_sitsOnStripImage;
@property(nonatomic) unsigned long long maxFields; // @synthesize maxFields=_maxFields;
@property(retain, nonatomic) PKPassFieldTemplate *defaultFieldTemplate; // @synthesize defaultFieldTemplate=_defaultFieldTemplate;
@property(nonatomic) double minFieldPadding; // @synthesize minFieldPadding=_minFieldPadding;
@property(nonatomic) struct CGRect bucketRect; // @synthesize bucketRect=_bucketRect;
@property(nonatomic) long long bucketAlignment; // @synthesize bucketAlignment=_bucketAlignment;
- (void).cxx_destruct;
- (id)templateForFieldAtIndex:(unsigned long long)arg1;
- (void)addFieldTemplate:(id)arg1;

@end
