/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@class NSString;

@interface VNEspressoResources : NSObject {

	SCD_Struct_VN44* _network;
	void* _plan;
	void* _context;
	NSString* _modelName;

}

@property (readonly) SCD_Struct_VN44* network;              //@synthesize network=_network - In the implementation block
@property (readonly) void* plan;                            //@synthesize plan=_plan - In the implementation block
@property (readonly) void* context;                         //@synthesize context=_context - In the implementation block
@property (readonly) NSString * modelName;                  //@synthesize modelName=_modelName - In the implementation block
-(id)description;
-(void)dealloc;
-(void*)context;
-(SCD_Struct_VN44*)network;
-(void*)plan;
-(NSString *)modelName;
-(id)initWithModelName:(id)arg1 network:(SCD_Struct_VN44*)arg2 plan:(void*)arg3 context:(void*)arg4 ;
-(void)free;
@end
