/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:58 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreRecognition/CoreRecognition-Structs.h>
@class MLModel, NSArray, NSString;

@interface CRMLModel : NSObject {

	MLModel* model;
	BOOL _disableCoreML;
	int _classCount;
	const int* _codeMap;
	NSArray* _modelShape;

}

@property (readonly) NSString * modelName; 
@property (readonly) const int* codeMap;                //@synthesize codeMap=_codeMap - In the implementation block
@property (readonly) int classCount;                    //@synthesize classCount=_classCount - In the implementation block
@property (retain) NSArray * modelShape;                //@synthesize modelShape=_modelShape - In the implementation block
@property (assign) BOOL disableCoreML;                  //@synthesize disableCoreML=_disableCoreML - In the implementation block
-(const int*)codeMap;
-(id)resultsFromImage:(id)arg1 textFeatures:(id)arg2 invert:(BOOL)arg3 tryPatternMatch:(BOOL)arg4 ;
-(id)resultsFromImage:(id)arg1 ;
-(void)setModelShape:(NSArray *)arg1 ;
-(void)setDisableCoreML:(BOOL)arg1 ;
-(BOOL)disableCoreML;
-(NSArray *)modelShape;
-(vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*)activationsFromImage:(id)arg1 ;
-(id)decodeActivations:(vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*)arg1 ;
-(id)coreMLResultsFromImage:(id)arg1 textFeatures:(id)arg2 invert:(BOOL)arg3 tryPatternMatch:(BOOL)arg4 ;
-(int)classCount;
-(id)predict:(id)arg1 error:(id*)arg2 ;
-(NSString *)modelName;
-(id)init;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
@end

