/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKViewVolume : NSObject {

	Matrix<double, 3, 1> _corners[8];

}

@property (nonatomic,readonly) const Matrix<double* corners; 
-(const Matrix<double*)corners;
-(void)updateWithFrustum:(SCD_Struct_VK26)arg1 matrix:(const Matrix<double, 4, 4>*)arg2 ;
-(Matrix<double, 3, 1>)lerpPoint:(float*)arg1 ;
@end

