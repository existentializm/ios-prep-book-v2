//
//  main.m
//  Objc
//
//  Created by Adam Dahan on 2016-08-21.
//  Copyright © 2016 Adam Dahan. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        // Create a set from an NSArray
        NSSet *set = [NSSet setWithArray:@[@1, @1, @2, @2, @3, @3, @4, @4]];
        
        // Look out the set only contains distinct objects! (no duplicates)
        NSLog(@"%@", set);
    }
    return 0;
}