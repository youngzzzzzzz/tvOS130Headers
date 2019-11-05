/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <USDKit/USDKit-Structs.h>
@interface USKResource : NSObject {

	shared_ptr<pxrInternal_v0_19__pxrReserved__usdkit__::ArAsset>* _asset;
	shared_ptr<const char>* _buffer;
	long long _length;

}
+(id)resourceWithURL:(id)arg1 ;
+(id)resourceWithUSKScene:(id)arg1 path:(id)arg2 ;
+(id)resourceWithPath:(id)arg1 ;
+(id)resourceWithResourcePath:(id)arg1 ;
-(void)dealloc;
-(id)dataNoCopy;
@end
