/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCopying.h>

@interface NSDocInfo : NSObject <NSCopying> {

	long long time;
	unsigned short mode;
	struct {
		unsigned isDir : 1;
		unsigned isSingleFile : 1;
		unsigned isSoftLink : 1;
		unsigned _pad : 13;
	}  flags;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)setFileAttributes:(id)arg1 ;
-(id)initWithFileAttributes:(id)arg1 ;
-(id)initFromInfo:(stat*)arg1 ;
@end

