//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDShapeCollection-Protocol.h>

@class NSString, TSDUserDefinedShapeLibrary;

__attribute__((visibility("hidden")))
@interface TSDUserDefinedShapeLibraryCollection : NSObject <TSDShapeCollection>
{
    TSDUserDefinedShapeLibrary *_userDefinedShapeLibrary;
}

@property(retain, nonatomic) TSDUserDefinedShapeLibrary *p_userDefinedShapeLibrary; // @synthesize p_userDefinedShapeLibrary=_userDefinedShapeLibrary;
- (void).cxx_destruct;
- (id)shapeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfShapes;
@property(readonly, nonatomic) NSString *name;
- (_Bool)hasUserDefinedShapes;
- (id)initWithUserDefinedShapeLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

