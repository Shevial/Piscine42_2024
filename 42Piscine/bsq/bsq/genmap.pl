#!/usr/bin/perl

use warnings;
use strict;

die "Usage: program x y density\n" unless (scalar(@ARGV) == 3);

my ($x, $y, $density) = @ARGV;

# Abrir el archivo 'output.txt' para escribir
open(my $fh, '>', 'output.txt') or die "Could not open file 'output.txt': $!";

# Escribir la primera línea en el archivo
print $fh "$y.ox\n";

# Generar la cuadrícula y escribirla en el archivo
for (my $i = 0; $i < $y; $i++) {
    for (my $j = 0; $j < $x; $j++) {
        if (int(rand($y) * 2) < $density) {
            print $fh "o";
        } else {
            print $fh ".";
        }
    }
    print $fh "\n";
}

# Cerrar el archivo
close($fh);

print "Output written to 'output.txt'\n";
