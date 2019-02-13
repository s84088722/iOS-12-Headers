//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@interface NTKKaleidoscopePathfinder : NSObject <NSSecureCoding>
{
    float _sampleRadiusX;
    float _sampleRadiusY;
    int _cellGridWidth;
    int _cellGridHeight;
    int _pathLength;
    // Error parsing type: ^, name: _dominanceGrid
    // Error parsing type: ^, name: _path
}

+ (_Bool)supportsSecureCoding;
+ (id)pathfinderFromFile:(id)arg1;
+ (id)pathfinderFromDirectory:(id)arg1;
+ (id)pathfinderWithImage:(id)arg1;
@property(readonly, nonatomic) int pathLength; // @synthesize pathLength=_pathLength;
@property(readonly, nonatomic) int cellGridHeight; // @synthesize cellGridHeight=_cellGridHeight;
@property(readonly, nonatomic) int cellGridWidth; // @synthesize cellGridWidth=_cellGridWidth;
- (void)adjustPathStart: /* Error: Ran out of types for this method. */;
- (_Bool)writeToFile:(id)arg1;
- (_Bool)writeToDirectory:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct NTKKaleidoscopePathfinderPoint)pointForTime:(float)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;

@end

