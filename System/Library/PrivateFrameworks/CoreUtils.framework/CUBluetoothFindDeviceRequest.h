/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUtils/CoreUtils-Structs.h>
@interface CUBluetoothFindDeviceRequest : NSObject {

	SCD_Struct_CU3 _address;
	/*^block*/id _completion;

}

@property (assign,nonatomic) SCD_Struct_CU3 address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) id completion;                         //@synthesize completion=_completion - In the implementation block
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(SCD_Struct_CU3)address;
-(void)setAddress:(SCD_Struct_CU3)arg1 ;
@end

