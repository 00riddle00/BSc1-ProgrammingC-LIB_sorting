#clean all obj files
for dir in $(ls source_files)
    do rm source_files/$dir/$dir.o
done

#make all obj files
for dir in $(ls source_files)
    do cd source_files/$dir/ && make && cd ../..
done

# copy all obj files to their folder
for dir in $(ls source_files)
    do cp source_files/$dir/*.o object_files/
done

