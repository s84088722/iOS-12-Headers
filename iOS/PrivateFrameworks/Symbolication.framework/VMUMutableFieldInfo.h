//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Symbolication/VMUFieldInfo.h>

@class NSString, VMUClassInfo;

@interface VMUMutableFieldInfo : VMUFieldInfo
{
}

@property(retain, nonatomic) VMUClassInfo *destinationLayout; // @dynamic destinationLayout;
@property(nonatomic) unsigned int stride; // @dynamic stride;
@property(nonatomic) unsigned int scannableSize; // @dynamic scannableSize;
@property(nonatomic) unsigned int flags; // @dynamic flags;
@property(nonatomic) _Bool isCapture; // @dynamic isCapture;
@property(nonatomic) _Bool isByref; // @dynamic isByref;
- (void)setSize:(unsigned int)arg1;
- (void)setOffset:(unsigned int)arg1;
@property(nonatomic) unsigned int scanType; // @dynamic scanType;
- (void)setTypeName:(id)arg1;
@property(copy, nonatomic) NSString *ivarName; // @dynamic ivarName;

@end

